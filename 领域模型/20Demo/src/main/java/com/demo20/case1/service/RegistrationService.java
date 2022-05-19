package com.demo20.case1.service;

import com.demo20.case1.dp.Address;
import com.demo20.case1.dp.Name;
import com.demo20.case1.dp.PhoneNum;
import com.demo20.case1.pojo.User;

public interface RegistrationService {
    public User register(Name name, PhoneNum phone, Address address);
}
