// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Sarco_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Sarco.DinoTamedInventoryComponent_Sarco_C.ExecuteUbergraph_DinoTamedInventoryComponent_Sarco
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Sarco_C::ExecuteUbergraph_DinoTamedInventoryComponent_Sarco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Sarco.DinoTamedInventoryComponent_Sarco_C.ExecuteUbergraph_DinoTamedInventoryComponent_Sarco");

	UDinoTamedInventoryComponent_Sarco_C_ExecuteUbergraph_DinoTamedInventoryComponent_Sarco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
