// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvProjFireBreath_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvProjFireBreath.WyvProjFireBreath_C.UserConstructionScript
// ()

void AWyvProjFireBreath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjFireBreath.WyvProjFireBreath_C.UserConstructionScript");

	AWyvProjFireBreath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjFireBreath.WyvProjFireBreath_C.ExecuteUbergraph_WyvProjFireBreath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvProjFireBreath_C::ExecuteUbergraph_WyvProjFireBreath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjFireBreath.WyvProjFireBreath_C.ExecuteUbergraph_WyvProjFireBreath");

	AWyvProjFireBreath_C_ExecuteUbergraph_WyvProjFireBreath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
