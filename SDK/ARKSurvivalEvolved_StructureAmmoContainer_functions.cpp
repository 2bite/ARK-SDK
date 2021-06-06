// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureAmmoContainer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureAmmoContainer.StructureAmmoContainer_C.UserConstructionScript
// ()

void AStructureAmmoContainer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureAmmoContainer.StructureAmmoContainer_C.UserConstructionScript");

	AStructureAmmoContainer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureAmmoContainer.StructureAmmoContainer_C.ExecuteUbergraph_StructureAmmoContainer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureAmmoContainer_C::ExecuteUbergraph_StructureAmmoContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureAmmoContainer.StructureAmmoContainer_C.ExecuteUbergraph_StructureAmmoContainer");

	AStructureAmmoContainer_C_ExecuteUbergraph_StructureAmmoContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
