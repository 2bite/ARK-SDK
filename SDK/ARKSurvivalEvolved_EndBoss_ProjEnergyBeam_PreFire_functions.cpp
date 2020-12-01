// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_ProjEnergyBeam_PreFire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C.UpdateProjectileBeam
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_ProjEnergyBeam_PreFire_C::UpdateProjectileBeam(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C.UpdateProjectileBeam");

	AEndBoss_ProjEnergyBeam_PreFire_C_UpdateProjectileBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C.UserConstructionScript
// ()

void AEndBoss_ProjEnergyBeam_PreFire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C.UserConstructionScript");

	AEndBoss_ProjEnergyBeam_PreFire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C.DisableAndDestroy
// ()

void AEndBoss_ProjEnergyBeam_PreFire_C::DisableAndDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C.DisableAndDestroy");

	AEndBoss_ProjEnergyBeam_PreFire_C_DisableAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C.ExecuteUbergraph_EndBoss_ProjEnergyBeam_PreFire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_ProjEnergyBeam_PreFire_C::ExecuteUbergraph_EndBoss_ProjEnergyBeam_PreFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C.ExecuteUbergraph_EndBoss_ProjEnergyBeam_PreFire");

	AEndBoss_ProjEnergyBeam_PreFire_C_ExecuteUbergraph_EndBoss_ProjEnergyBeam_PreFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
