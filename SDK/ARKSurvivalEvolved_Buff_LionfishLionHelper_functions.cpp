// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LionfishLionHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LionfishLionHelper_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPActivated");

	ABuff_LionfishLionHelper_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LionfishLionHelper_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPDeactivated");

	ABuff_LionfishLionHelper_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.ReceiveBeginPlay
// ()

void ABuff_LionfishLionHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.ReceiveBeginPlay");

	ABuff_LionfishLionHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPGetHUDElements
// (NetReliable, Event, Static, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_LionfishLionHelper_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPGetHUDElements");

	ABuff_LionfishLionHelper_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.UserConstructionScript
// ()

void ABuff_LionfishLionHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.UserConstructionScript");

	ABuff_LionfishLionHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.ExecuteUbergraph_Buff_LionfishLionHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LionfishLionHelper_C::ExecuteUbergraph_Buff_LionfishLionHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.ExecuteUbergraph_Buff_LionfishLionHelper");

	ABuff_LionfishLionHelper_C_ExecuteUbergraph_Buff_LionfishLionHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
