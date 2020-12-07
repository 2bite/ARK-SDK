// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ChooseChargeSwipe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.Check if Too Far from SpawnLoc
// ()
// Parameters:
// struct FVector                 TestLoc                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Toofar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_ChooseChargeSwipe_C::Check_if_Too_Far_from_SpawnLoc(const struct FVector& TestLoc, bool* Toofar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.Check if Too Far from SpawnLoc");

	UTask_ChooseChargeSwipe_C_Check_if_Too_Far_from_SpawnLoc_Params params;
	params.TestLoc = TestLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Toofar != nullptr)
		*Toofar = params.Toofar;
}


// Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.FindRandomDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_ChooseChargeSwipe_C::FindRandomDirection(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.FindRandomDirection");

	UTask_ChooseChargeSwipe_C_FindRandomDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.ReceiveExecute
// (NetRequest, Native, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ChooseChargeSwipe_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.ReceiveExecute");

	UTask_ChooseChargeSwipe_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.ExecuteUbergraph_Task_ChooseChargeSwipe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ChooseChargeSwipe_C::ExecuteUbergraph_Task_ChooseChargeSwipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.ExecuteUbergraph_Task_ChooseChargeSwipe");

	UTask_ChooseChargeSwipe_C_ExecuteUbergraph_Task_ChooseChargeSwipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
