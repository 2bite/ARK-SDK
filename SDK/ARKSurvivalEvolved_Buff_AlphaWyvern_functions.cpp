// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AlphaWyvern.Buff_AlphaWyvern_C.UserConstructionScript
// ()

void ABuff_AlphaWyvern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaWyvern.Buff_AlphaWyvern_C.UserConstructionScript");

	ABuff_AlphaWyvern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AlphaWyvern.Buff_AlphaWyvern_C.ExecuteUbergraph_Buff_AlphaWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AlphaWyvern_C::ExecuteUbergraph_Buff_AlphaWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AlphaWyvern.Buff_AlphaWyvern_C.ExecuteUbergraph_Buff_AlphaWyvern");

	ABuff_AlphaWyvern_C_ExecuteUbergraph_Buff_AlphaWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
