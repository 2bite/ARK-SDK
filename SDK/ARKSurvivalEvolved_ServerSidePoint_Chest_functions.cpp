// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ServerSidePoint_Chest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerSidePoint_Chest.ServerSidePoint_Chest_C.UserConstructionScript
// ()

void AServerSidePoint_Chest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSidePoint_Chest.ServerSidePoint_Chest_C.UserConstructionScript");

	AServerSidePoint_Chest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSidePoint_Chest.ServerSidePoint_Chest_C.ExecuteUbergraph_ServerSidePoint_Chest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AServerSidePoint_Chest_C::ExecuteUbergraph_ServerSidePoint_Chest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSidePoint_Chest.ServerSidePoint_Chest_C.ExecuteUbergraph_ServerSidePoint_Chest");

	AServerSidePoint_Chest_C_ExecuteUbergraph_ServerSidePoint_Chest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
