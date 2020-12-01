// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretMinigun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretMinigun.StructureTurretMinigun_C.UserConstructionScript
// ()

void AStructureTurretMinigun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretMinigun.StructureTurretMinigun_C.UserConstructionScript");

	AStructureTurretMinigun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretMinigun.StructureTurretMinigun_C.ExecuteUbergraph_StructureTurretMinigun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretMinigun_C::ExecuteUbergraph_StructureTurretMinigun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretMinigun.StructureTurretMinigun_C.ExecuteUbergraph_StructureTurretMinigun");

	AStructureTurretMinigun_C_ExecuteUbergraph_StructureTurretMinigun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
