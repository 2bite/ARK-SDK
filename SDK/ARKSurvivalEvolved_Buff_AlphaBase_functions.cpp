// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AlphaBase.Buff_AlphaBase_C.UserConstructionScript
// ()

void ABuff_AlphaBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaBase.Buff_AlphaBase_C.UserConstructionScript");

	ABuff_AlphaBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AlphaBase.Buff_AlphaBase_C.ExecuteUbergraph_Buff_AlphaBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AlphaBase_C::ExecuteUbergraph_Buff_AlphaBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaBase.Buff_AlphaBase_C.ExecuteUbergraph_Buff_AlphaBase");

	ABuff_AlphaBase_C_ExecuteUbergraph_Buff_AlphaBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
