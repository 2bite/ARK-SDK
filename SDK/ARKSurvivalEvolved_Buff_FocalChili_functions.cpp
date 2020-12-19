// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FocalChili_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FocalChili.Buff_FocalChili_C.UserConstructionScript
// ()

void ABuff_FocalChili_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FocalChili.Buff_FocalChili_C.UserConstructionScript");

	ABuff_FocalChili_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FocalChili.Buff_FocalChili_C.ExecuteUbergraph_Buff_FocalChili
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FocalChili_C::ExecuteUbergraph_Buff_FocalChili(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FocalChili.Buff_FocalChili_C.ExecuteUbergraph_Buff_FocalChili");

	ABuff_FocalChili_C_ExecuteUbergraph_Buff_FocalChili_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
