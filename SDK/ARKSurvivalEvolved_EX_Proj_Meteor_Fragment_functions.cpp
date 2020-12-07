// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Proj_Meteor_Fragment_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.Fracture
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void AEX_Proj_Meteor_Fragment_C::STATIC_Fracture()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.Fracture");

	AEX_Proj_Meteor_Fragment_C_Fracture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.OnExplode
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AEX_Proj_Meteor_Fragment_C::STATIC_OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.OnExplode");

	AEX_Proj_Meteor_Fragment_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.UserConstructionScript
// ()

void AEX_Proj_Meteor_Fragment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.UserConstructionScript");

	AEX_Proj_Meteor_Fragment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Proj_Meteor_Fragment_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ReceiveTick");

	AEX_Proj_Meteor_Fragment_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ReceiveBeginPlay
// ()

void AEX_Proj_Meteor_Fragment_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ReceiveBeginPlay");

	AEX_Proj_Meteor_Fragment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.On_Impact
// ()

void AEX_Proj_Meteor_Fragment_C::On_Impact()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.On_Impact");

	AEX_Proj_Meteor_Fragment_C_On_Impact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AEX_Proj_Meteor_Fragment_C::BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature");

	AEX_Proj_Meteor_Fragment_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AEX_Proj_Meteor_Fragment_C::BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature");

	AEX_Proj_Meteor_Fragment_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.Update_Visuals
// ()

void AEX_Proj_Meteor_Fragment_C::Update_Visuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.Update_Visuals");

	AEX_Proj_Meteor_Fragment_C_Update_Visuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ExecuteUbergraph_EX_Proj_Meteor_Fragment
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Proj_Meteor_Fragment_C::ExecuteUbergraph_EX_Proj_Meteor_Fragment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ExecuteUbergraph_EX_Proj_Meteor_Fragment");

	AEX_Proj_Meteor_Fragment_C_ExecuteUbergraph_EX_Proj_Meteor_Fragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
