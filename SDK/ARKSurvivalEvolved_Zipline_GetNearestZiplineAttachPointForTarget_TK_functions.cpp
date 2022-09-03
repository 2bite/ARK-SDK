// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_GetNearestZiplineAttachPointForTarget_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation
// (NetReliable, NetRequest, Exec, NetResponse, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FVector                 GroundLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttachLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZipline_GetNearestZiplineAttachPointForTarget_TK_C::FindAttachLocation(struct FVector* GroundLocation, struct FVector* AttachLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation");

	UZipline_GetNearestZiplineAttachPointForTarget_TK_C_FindAttachLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroundLocation != nullptr)
		*GroundLocation = params.GroundLocation;
	if (AttachLocation != nullptr)
		*AttachLocation = params.AttachLocation;
}


// Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute
// (NetReliable, NetRequest, NetResponse, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_GetNearestZiplineAttachPointForTarget_TK_C::STATIC_ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute");

	UZipline_GetNearestZiplineAttachPointForTarget_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_GetNearestZiplineAttachPointForTarget_TK_C::ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_GetNearestZiplineAttachPointForTarget_TK.Zipline_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK");

	UZipline_GetNearestZiplineAttachPointForTarget_TK_C_ExecuteUbergraph_Zipline_GetNearestZiplineAttachPointForTarget_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
