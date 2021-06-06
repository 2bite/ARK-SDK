// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargingMoleratRider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargingMoleratRider.Buff_ChargingMoleratRider_C.UserConstructionScript
// ()

void ABuff_ChargingMoleratRider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargingMoleratRider.Buff_ChargingMoleratRider_C.UserConstructionScript");

	ABuff_ChargingMoleratRider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargingMoleratRider.Buff_ChargingMoleratRider_C.ExecuteUbergraph_Buff_ChargingMoleratRider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargingMoleratRider_C::ExecuteUbergraph_Buff_ChargingMoleratRider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargingMoleratRider.Buff_ChargingMoleratRider_C.ExecuteUbergraph_Buff_ChargingMoleratRider");

	ABuff_ChargingMoleratRider_C_ExecuteUbergraph_Buff_ChargingMoleratRider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
