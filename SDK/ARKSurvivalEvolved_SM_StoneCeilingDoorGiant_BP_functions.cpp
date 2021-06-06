// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_StoneCeilingDoorGiant_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_StoneCeilingDoorGiant_BP.SM_StoneCeilingDoorGiant_BP_C.UserConstructionScript
// ()

void ASM_StoneCeilingDoorGiant_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_StoneCeilingDoorGiant_BP.SM_StoneCeilingDoorGiant_BP_C.UserConstructionScript");

	ASM_StoneCeilingDoorGiant_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_StoneCeilingDoorGiant_BP.SM_StoneCeilingDoorGiant_BP_C.ExecuteUbergraph_SM_StoneCeilingDoorGiant_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASM_StoneCeilingDoorGiant_BP_C::ExecuteUbergraph_SM_StoneCeilingDoorGiant_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_StoneCeilingDoorGiant_BP.SM_StoneCeilingDoorGiant_BP_C.ExecuteUbergraph_SM_StoneCeilingDoorGiant_BP");

	ASM_StoneCeilingDoorGiant_BP_C_ExecuteUbergraph_SM_StoneCeilingDoorGiant_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
