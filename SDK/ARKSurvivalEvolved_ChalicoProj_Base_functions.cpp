// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoProj_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChalicoProj_Base.ChalicoProj_Base_C.ReceiveBeginPlay
// ()

void AChalicoProj_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoProj_Base.ChalicoProj_Base_C.ReceiveBeginPlay");

	AChalicoProj_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChalicoProj_Base.ChalicoProj_Base_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AChalicoProj_Base_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoProj_Base.ChalicoProj_Base_C.OnExplode");

	AChalicoProj_Base_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ChalicoProj_Base.ChalicoProj_Base_C.UserConstructionScript
// ()

void AChalicoProj_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoProj_Base.ChalicoProj_Base_C.UserConstructionScript");

	AChalicoProj_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChalicoProj_Base.ChalicoProj_Base_C.ExecuteUbergraph_ChalicoProj_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChalicoProj_Base_C::ExecuteUbergraph_ChalicoProj_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoProj_Base.ChalicoProj_Base_C.ExecuteUbergraph_ChalicoProj_Base");

	AChalicoProj_Base_C_ExecuteUbergraph_ChalicoProj_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
