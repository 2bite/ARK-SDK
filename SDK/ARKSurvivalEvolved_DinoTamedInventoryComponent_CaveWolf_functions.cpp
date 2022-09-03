// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_CaveWolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_CaveWolf.DinoTamedInventoryComponent_CaveWolf_C.ExecuteUbergraph_DinoTamedInventoryComponent_CaveWolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_CaveWolf_C::ExecuteUbergraph_DinoTamedInventoryComponent_CaveWolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_CaveWolf.DinoTamedInventoryComponent_CaveWolf_C.ExecuteUbergraph_DinoTamedInventoryComponent_CaveWolf");

	UDinoTamedInventoryComponent_CaveWolf_C_ExecuteUbergraph_DinoTamedInventoryComponent_CaveWolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
