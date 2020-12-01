// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FKaijuWyvernLife_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FKaijuWyvernLife.Buff_FKaijuWyvernLife_C.UserConstructionScript
// ()

void ABuff_FKaijuWyvernLife_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuWyvernLife.Buff_FKaijuWyvernLife_C.UserConstructionScript");

	ABuff_FKaijuWyvernLife_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FKaijuWyvernLife.Buff_FKaijuWyvernLife_C.ExecuteUbergraph_Buff_FKaijuWyvernLife
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FKaijuWyvernLife_C::ExecuteUbergraph_Buff_FKaijuWyvernLife(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuWyvernLife.Buff_FKaijuWyvernLife_C.ExecuteUbergraph_Buff_FKaijuWyvernLife");

	ABuff_FKaijuWyvernLife_C_ExecuteUbergraph_Buff_FKaijuWyvernLife_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
