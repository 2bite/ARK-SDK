// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Para_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Para.DinoTamedInventoryComponent_Para_C.ExecuteUbergraph_DinoTamedInventoryComponent_Para
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Para_C::ExecuteUbergraph_DinoTamedInventoryComponent_Para(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Para.DinoTamedInventoryComponent_Para_C.ExecuteUbergraph_DinoTamedInventoryComponent_Para");

	UDinoTamedInventoryComponent_Para_C_ExecuteUbergraph_DinoTamedInventoryComponent_Para_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
