// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PortableRope_Ladder_Preplaced_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APortableRope_Ladder_Preplaced_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPGetMultiUseEntries");

	APortableRope_Ladder_Preplaced_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPPlacedStructure
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, NetClient, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void APortableRope_Ladder_Preplaced_C::STATIC_BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPPlacedStructure");

	APortableRope_Ladder_Preplaced_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.UserConstructionScript
// ()

void APortableRope_Ladder_Preplaced_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.UserConstructionScript");

	APortableRope_Ladder_Preplaced_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.ExecuteUbergraph_PortableRope_Ladder_Preplaced
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APortableRope_Ladder_Preplaced_C::ExecuteUbergraph_PortableRope_Ladder_Preplaced(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.ExecuteUbergraph_PortableRope_Ladder_Preplaced");

	APortableRope_Ladder_Preplaced_C_ExecuteUbergraph_PortableRope_Ladder_Preplaced_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
