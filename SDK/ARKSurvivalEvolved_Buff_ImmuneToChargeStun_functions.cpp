// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToChargeStun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ImmuneToChargeStun.Buff_ImmuneToChargeStun_C.UserConstructionScript
// ()

void ABuff_ImmuneToChargeStun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToChargeStun.Buff_ImmuneToChargeStun_C.UserConstructionScript");

	ABuff_ImmuneToChargeStun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImmuneToChargeStun.Buff_ImmuneToChargeStun_C.ExecuteUbergraph_Buff_ImmuneToChargeStun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImmuneToChargeStun_C::ExecuteUbergraph_Buff_ImmuneToChargeStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToChargeStun.Buff_ImmuneToChargeStun_C.ExecuteUbergraph_Buff_ImmuneToChargeStun");

	ABuff_ImmuneToChargeStun_C_ExecuteUbergraph_Buff_ImmuneToChargeStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
