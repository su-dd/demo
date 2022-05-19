package com.demo20.case1.pojo;

import com.demo20.case1.dp.Address;
import com.demo20.case1.dp.Name;
import com.demo20.case1.dp.PhoneNum;
import lombok.Data;

@Data
public class User {
    public Name name;
    public PhoneNum phone;
    public Address address;
    public Long repId;
}
