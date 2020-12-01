// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Mantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDropInventoryComponent_Mantis.DinoDropInventoryComponent_Mantis_C.ExecuteUbergraph_DinoDropInventoryComponent_Mantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDropInventoryComponent_Mantis_C::ExecuteUbergraph_DinoDropInventoryComponent_Mantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Mantis.DinoDropInventoryComponent_Mantis_C.ExecuteUbergraph_DinoDropInventoryComponent_Mantis");

	UDinoDropInventoryComponent_Mantis_C_ExecuteUbergraph_DinoDropInventoryComponent_Mantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
