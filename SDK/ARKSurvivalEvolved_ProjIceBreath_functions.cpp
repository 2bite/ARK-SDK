// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjIceBreath_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjIceBreath.ProjIceBreath_C.UserConstructionScript
// ()

void AProjIceBreath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjIceBreath.ProjIceBreath_C.UserConstructionScript");

	AProjIceBreath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjIceBreath.ProjIceBreath_C.ExecuteUbergraph_ProjIceBreath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjIceBreath_C::ExecuteUbergraph_ProjIceBreath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjIceBreath.ProjIceBreath_C.ExecuteUbergraph_ProjIceBreath");

	AProjIceBreath_C_ExecuteUbergraph_ProjIceBreath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
