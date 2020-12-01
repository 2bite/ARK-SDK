// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Proj_Meteor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_Proj_Meteor.EX_Proj_Meteor_C.Fracture
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasDefaults, BlueprintPure, Const, NetValidate)

void AEX_Proj_Meteor_C::STATIC_Fracture()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor.EX_Proj_Meteor_C.Fracture");

	AEX_Proj_Meteor_C_Fracture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor.EX_Proj_Meteor_C.OnExplode
// (NetReliable, Event, MulticastDelegate, Private, HasDefaults, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AEX_Proj_Meteor_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor.EX_Proj_Meteor_C.OnExplode");

	AEX_Proj_Meteor_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function EX_Proj_Meteor.EX_Proj_Meteor_C.UserConstructionScript
// ()

void AEX_Proj_Meteor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor.EX_Proj_Meteor_C.UserConstructionScript");

	AEX_Proj_Meteor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor.EX_Proj_Meteor_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Proj_Meteor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor.EX_Proj_Meteor_C.ReceiveTick");

	AEX_Proj_Meteor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor.EX_Proj_Meteor_C.ReceiveBeginPlay
// ()

void AEX_Proj_Meteor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor.EX_Proj_Meteor_C.ReceiveBeginPlay");

	AEX_Proj_Meteor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor.EX_Proj_Meteor_C.On_Impact
// ()

void AEX_Proj_Meteor_C::On_Impact()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor.EX_Proj_Meteor_C.On_Impact");

	AEX_Proj_Meteor_C_On_Impact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor.EX_Proj_Meteor_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AEX_Proj_Meteor_C::BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor.EX_Proj_Meteor_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature");

	AEX_Proj_Meteor_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function EX_Proj_Meteor.EX_Proj_Meteor_C.ExecuteUbergraph_EX_Proj_Meteor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Proj_Meteor_C::ExecuteUbergraph_EX_Proj_Meteor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor.EX_Proj_Meteor_C.ExecuteUbergraph_EX_Proj_Meteor");

	AEX_Proj_Meteor_C_ExecuteUbergraph_EX_Proj_Meteor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
