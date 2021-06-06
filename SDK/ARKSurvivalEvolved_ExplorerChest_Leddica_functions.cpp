// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Leddica_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerChest_Leddica.ExplorerChest_Leddica_C.UserConstructionScript
// ()

void AExplorerChest_Leddica_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Leddica.ExplorerChest_Leddica_C.UserConstructionScript");

	AExplorerChest_Leddica_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Leddica.ExplorerChest_Leddica_C.ExecuteUbergraph_ExplorerChest_Leddica
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Leddica_C::ExecuteUbergraph_ExplorerChest_Leddica(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Leddica.ExplorerChest_Leddica_C.ExecuteUbergraph_ExplorerChest_Leddica");

	AExplorerChest_Leddica_C_ExecuteUbergraph_ExplorerChest_Leddica_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
