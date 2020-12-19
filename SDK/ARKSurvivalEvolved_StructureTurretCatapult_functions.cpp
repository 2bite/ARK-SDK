// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretCatapult_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretCatapult.StructureTurretCatapult_C.UserConstructionScript
// ()

void AStructureTurretCatapult_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretCatapult.StructureTurretCatapult_C.UserConstructionScript");

	AStructureTurretCatapult_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretCatapult.StructureTurretCatapult_C.ExecuteUbergraph_StructureTurretCatapult
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretCatapult_C::ExecuteUbergraph_StructureTurretCatapult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretCatapult.StructureTurretCatapult_C.ExecuteUbergraph_StructureTurretCatapult");

	AStructureTurretCatapult_C_ExecuteUbergraph_StructureTurretCatapult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
