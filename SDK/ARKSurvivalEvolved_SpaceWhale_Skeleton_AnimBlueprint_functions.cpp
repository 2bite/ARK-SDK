// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhale_Skeleton_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.GetFlyingBlendspaceCoords
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// class APrimalDinoCharacter**   ForDino                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               BlendspaceCoords               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USpaceWhale_Skeleton_AnimBlueprint_C::STATIC_GetFlyingBlendspaceCoords(class APrimalDinoCharacter** ForDino, struct FVector2D* BlendspaceCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.GetFlyingBlendspaceCoords");

	USpaceWhale_Skeleton_AnimBlueprint_C_GetFlyingBlendspaceCoords_Params params;
	params.ForDino = ForDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlendspaceCoords != nullptr)
		*BlendspaceCoords = params.BlendspaceCoords;
}


// Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USpaceWhale_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	USpaceWhale_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USpaceWhale_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint");

	USpaceWhale_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
