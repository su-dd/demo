package com.demo20.case1.controller;

import com.demo20.case1.dp.Address;
import com.demo20.case1.dp.Name;
import com.demo20.case1.dp.PhoneNum;
import com.demo20.case1.pojo.User;
import com.demo20.case1.service.RegistrationService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;

import javax.xml.bind.ValidationException;

@Controller
@RequestMapping(value = "/case2")
public class RegistrationController {
    @Autowired
    RegistrationService registrationService;

    @RequestMapping(value = "/register", method = RequestMethod.POST)
    @ResponseBody
    public User register(@RequestParam String name, @RequestParam String phone, @RequestParam String address) throws ValidationException {
        return registrationService.register(new Name(name), new PhoneNum(phone), new Address(address));
    }
}
