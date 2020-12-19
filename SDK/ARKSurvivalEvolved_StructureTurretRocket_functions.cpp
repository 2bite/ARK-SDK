// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretRocket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretRocket.StructureTurretRocket_C.UserConstructionScript
// ()

void AStructureTurretRocket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretRocket.StructureTurretRocket_C.UserConstructionScript");

	AStructureTurretRocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretRocket.StructureTurretRocket_C.ExecuteUbergraph_StructureTurretRocket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretRocket_C::ExecuteUbergraph_StructureTurretRocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretRocket.StructureTurretRocket_C.ExecuteUbergraph_StructureTurretRocket");

	AStructureTurretRocket_C_ExecuteUbergraph_StructureTurretRocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
