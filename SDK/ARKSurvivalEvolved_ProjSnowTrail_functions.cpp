// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSnowTrail_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSnowTrail.ProjSnowTrail_C.UserConstructionScript
// ()

void AProjSnowTrail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSnowTrail.ProjSnowTrail_C.UserConstructionScript");

	AProjSnowTrail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSnowTrail.ProjSnowTrail_C.ExecuteUbergraph_ProjSnowTrail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSnowTrail_C::ExecuteUbergraph_ProjSnowTrail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSnowTrail.ProjSnowTrail_C.ExecuteUbergraph_ProjSnowTrail");

	AProjSnowTrail_C_ExecuteUbergraph_ProjSnowTrail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
