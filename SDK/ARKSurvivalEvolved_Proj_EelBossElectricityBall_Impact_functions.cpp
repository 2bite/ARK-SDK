// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_EelBossElectricityBall_Impact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C.UserConstructionScript
// ()

void AProj_EelBossElectricityBall_Impact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C.UserConstructionScript");

	AProj_EelBossElectricityBall_Impact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C.ExecuteUbergraph_Proj_EelBossElectricityBall_Impact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_EelBossElectricityBall_Impact_C::ExecuteUbergraph_Proj_EelBossElectricityBall_Impact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C.ExecuteUbergraph_Proj_EelBossElectricityBall_Impact");

	AProj_EelBossElectricityBall_Impact_C_ExecuteUbergraph_Proj_EelBossElectricityBall_Impact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
