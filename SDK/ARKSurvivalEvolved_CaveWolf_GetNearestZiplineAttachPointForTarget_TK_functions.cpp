// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_GetNearestZiplineAttachPointForTarget_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation
// (NetRequest, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 GroundLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttachLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C::STATIC_FindAttachLocation(struct FVector* GroundLocation, struct FVector* AttachLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.FindAttachLocation");

	UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_FindAttachLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroundLocation != nullptr)
		*GroundLocation = params.GroundLocation;
	if (AttachLocation != nullptr)
		*AttachLocation = params.AttachLocation;
}


// Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ReceiveExecute");

	UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C::ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_GetNearestZiplineAttachPointForTarget_TK.CaveWolf_GetNearestZiplineAttachPointForTarget_TK_C.ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK");

	UCaveWolf_GetNearestZiplineAttachPointForTarget_TK_C_ExecuteUbergraph_CaveWolf_GetNearestZiplineAttachPointForTarget_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
