// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RagdollKinematicActor_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RagdollKinematicActor_BP.RagdollKinematicActor_BP_C.UserConstructionScript
// ()

void ARagdollKinematicActor_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RagdollKinematicActor_BP.RagdollKinematicActor_BP_C.UserConstructionScript");

	ARagdollKinematicActor_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RagdollKinematicActor_BP.RagdollKinematicActor_BP_C.ExecuteUbergraph_RagdollKinematicActor_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARagdollKinematicActor_BP_C::ExecuteUbergraph_RagdollKinematicActor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RagdollKinematicActor_BP.RagdollKinematicActor_BP_C.ExecuteUbergraph_RagdollKinematicActor_BP");

	ARagdollKinematicActor_BP_C_ExecuteUbergraph_RagdollKinematicActor_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
