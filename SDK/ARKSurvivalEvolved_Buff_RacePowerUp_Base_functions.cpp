// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RacePowerUp_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.InitRacePowerUp
// ()
// Parameters:
// class AMissionType_Race_C*     FromRaceMission                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Base_C::InitRacePowerUp(class AMissionType_Race_C* FromRaceMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.InitRacePowerUp");

	ABuff_RacePowerUp_Base_C_InitRacePowerUp_Params params;
	params.FromRaceMission = FromRaceMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.UserConstructionScript
// ()

void ABuff_RacePowerUp_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.UserConstructionScript");

	ABuff_RacePowerUp_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.ExecuteUbergraph_Buff_RacePowerUp_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Base_C::ExecuteUbergraph_Buff_RacePowerUp_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C.ExecuteUbergraph_Buff_RacePowerUp_Base");

	ABuff_RacePowerUp_Base_C_ExecuteUbergraph_Buff_RacePowerUp_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
