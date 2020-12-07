// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBallistaBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.UserConstructionScript
// ()

void AStructureTurretBallistaBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.UserConstructionScript");

	AStructureTurretBallistaBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.ExecuteUbergraph_StructureTurretBallistaBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBallistaBaseBP_C::ExecuteUbergraph_StructureTurretBallistaBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.ExecuteUbergraph_StructureTurretBallistaBaseBP");

	AStructureTurretBallistaBaseBP_C_ExecuteUbergraph_StructureTurretBallistaBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
