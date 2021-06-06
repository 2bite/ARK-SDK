// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpikeWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpikeWall.SpikeWall_C.UserConstructionScript
// ()

void ASpikeWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall.SpikeWall_C.UserConstructionScript");

	ASpikeWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeWall.SpikeWall_C.DamageTick
// ()

void ASpikeWall_C::DamageTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall.SpikeWall_C.DamageTick");

	ASpikeWall_C_DamageTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeWall.SpikeWall_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ASpikeWall_C::BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall.SpikeWall_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature");

	ASpikeWall_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function SpikeWall.SpikeWall_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ASpikeWall_C::BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall.SpikeWall_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature");

	ASpikeWall_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpikeWall.SpikeWall_C.ExecuteUbergraph_SpikeWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpikeWall_C::ExecuteUbergraph_SpikeWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpikeWall.SpikeWall_C.ExecuteUbergraph_SpikeWall");

	ASpikeWall_C_ExecuteUbergraph_SpikeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
