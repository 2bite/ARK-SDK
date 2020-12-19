// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MegatheriumSit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MegatheriumSit.Buff_MegatheriumSit_C.UserConstructionScript
// ()

void ABuff_MegatheriumSit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MegatheriumSit.Buff_MegatheriumSit_C.UserConstructionScript");

	ABuff_MegatheriumSit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MegatheriumSit.Buff_MegatheriumSit_C.ExecuteUbergraph_Buff_MegatheriumSit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MegatheriumSit_C::ExecuteUbergraph_Buff_MegatheriumSit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MegatheriumSit.Buff_MegatheriumSit_C.ExecuteUbergraph_Buff_MegatheriumSit");

	ABuff_MegatheriumSit_C_ExecuteUbergraph_Buff_MegatheriumSit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
