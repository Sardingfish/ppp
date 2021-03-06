﻿#include "ppp_data.h"

ppp_sate::ppp_sate()
    :PRN(""),position_x(0),position_y(0),position_z(0),clock(0),
    position_n(0),position_e(0),position_u(0),
    velocity_x(0),velocity_y(0),velocity_z(0),
    elevation(0),azimuth(0),distance(0),P1(0),P2(0),L1(0),L2(0),
    ionized_pseudo(0),ionized_carrier(0),
    trop_delay(0),trop_map(0),relativity(0),sagnac(0),tide_effect(0),
    stat_ant_height(0),sate_antenna(0),offsetL1(0),offsetL2(0),windup(0),
    P3(0),L3(0)
{

}

bool ppp_sate::operator<(const ppp_sate &right) const
{
    if(this->PRN <right.PRN)
    {
        return true;
    }
    else
    {
        return false;
    }
}


ppp_epoch::ppp_epoch()
    :sate_number(0),year(0),month(0),day(0),
     hour(0),minute(0),second(0),GPSW(0),GPSS(0),zhd(0)
{

}


ppp_file::ppp_file()
    :receiver_x(0),receiver_y(0),receiver_z(0)
{

}


ppp_X::ppp_X()
    :dx(0),dy(0),dz(0),dt(0),trop(0)
{

}


result_file::result_file()
{

}
