package com.demo20.case2.repository.impl;

import com.demo20.case1.pojo.SalesDO;
import com.demo20.case1.repository.SalesMapper;
import com.demo20.case2.entity.Sales;
import com.demo20.case2.repository.SalesRepo;
import com.demo20.case2.repository.impl.builder.SalesBuilder;
import com.demo20.case2.vo.PhoneNumber;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

import javax.annotation.Resource;

@Component
public class SalesRepoImpl implements SalesRepo {
    @Resource
    SalesMapper salesMapper;
    @Autowired
    SalesBuilder salesBuilder;
    @Override
    public Sales find(PhoneNumber phone) {
        SalesDO salesDO = salesMapper.select(phone.getAreaCode(), phone.getOperatorCode());
        if (salesDO != null) {
            return salesBuilder.toEntity(salesDO);
        }
        return null;
    }
}
