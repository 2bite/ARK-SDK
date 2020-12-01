// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_CorruptionWave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_CorruptionWave.Proj_CorruptionWave_C.UserConstructionScript
// ()

void AProj_CorruptionWave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_CorruptionWave.Proj_CorruptionWave_C.UserConstructionScript");

	AProj_CorruptionWave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_CorruptionWave.Proj_CorruptionWave_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_396_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AProj_CorruptionWave_C::BndEvt__Capsule1_K2Node_ComponentBoundEvent_396_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_CorruptionWave.Proj_CorruptionWave_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_396_ComponentBeginOverlapSignature__DelegateSignature");

	AProj_CorruptionWave_C_BndEvt__Capsule1_K2Node_ComponentBoundEvent_396_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function Proj_CorruptionWave.Proj_CorruptionWave_C.ExecuteUbergraph_Proj_CorruptionWave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_CorruptionWave_C::ExecuteUbergraph_Proj_CorruptionWave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_CorruptionWave.Proj_CorruptionWave_C.ExecuteUbergraph_Proj_CorruptionWave");

	AProj_CorruptionWave_C_ExecuteUbergraph_Proj_CorruptionWave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
