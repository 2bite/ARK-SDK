// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Direwolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Direwolf.DinoTamedInventoryComponent_Direwolf_C.ExecuteUbergraph_DinoTamedInventoryComponent_Direwolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Direwolf_C::ExecuteUbergraph_DinoTamedInventoryComponent_Direwolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Direwolf.DinoTamedInventoryComponent_Direwolf_C.ExecuteUbergraph_DinoTamedInventoryComponent_Direwolf");

	UDinoTamedInventoryComponent_Direwolf_C_ExecuteUbergraph_DinoTamedInventoryComponent_Direwolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
