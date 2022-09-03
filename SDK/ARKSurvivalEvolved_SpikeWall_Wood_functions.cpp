// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpikeWall_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpikeWall_Wood.SpikeWall_Wood_C.UserConstructionScript
// ()

void ASpikeWall_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.UserConstructionScript");

	ASpikeWall_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeWall_Wood.SpikeWall_Wood_C.DamageTick
// ()

void ASpikeWall_Wood_C::DamageTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.DamageTick");

	ASpikeWall_Wood_C_DamageTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ASpikeWall_Wood_C::BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature");

	ASpikeWall_Wood_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ASpikeWall_Wood_C::BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature");

	ASpikeWall_Wood_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeWall_Wood.SpikeWall_Wood_C.ExecuteUbergraph_SpikeWall_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpikeWall_Wood_C::ExecuteUbergraph_SpikeWall_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall_Wood.SpikeWall_Wood_C.ExecuteUbergraph_SpikeWall_Wood");

	ASpikeWall_Wood_C_ExecuteUbergraph_SpikeWall_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
