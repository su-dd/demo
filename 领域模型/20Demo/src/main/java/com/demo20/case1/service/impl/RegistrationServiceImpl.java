package com.demo20.case1.service.impl;

import com.demo20.case1.dp.Address;
import com.demo20.case1.dp.Name;
import com.demo20.case1.dp.PhoneNum;
import com.demo20.case1.pojo.SalesRep;
import com.demo20.case1.pojo.User;
import com.demo20.case1.repository.SalesRepRepo;
import com.demo20.case1.repository.UserRepo;
import com.demo20.case1.service.RegistrationService;
import org.springframework.stereotype.Service;

import javax.annotation.Resource;

@Service
public class RegistrationServiceImpl implements RegistrationService {

    @Resource
    private UserRepo userRepo;
    @Resource
    private SalesRepRepo salesRepRepo;

    @Override
    public User register(Name name, PhoneNum phone, Address address) {

        //找到区号负责人（SalesRep）
        SalesRep rep = salesRepRepo.findRep(phone.findAreaCode());

        // 最后创建用户，落盘，然后返回
        User user = new User();
        user.name = name;
        user.phone = phone;
        user.address = address;
        if (null != rep) {
            user.repId = rep.id;
        }

        return userRepo.save(user);
    }
}
