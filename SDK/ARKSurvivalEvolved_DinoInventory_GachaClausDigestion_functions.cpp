// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoInventory_GachaClausDigestion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoInventory_GachaClausDigestion.DinoInventory_GachaClausDigestion_C.ExecuteUbergraph_DinoInventory_GachaClausDigestion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoInventory_GachaClausDigestion_C::ExecuteUbergraph_DinoInventory_GachaClausDigestion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoInventory_GachaClausDigestion.DinoInventory_GachaClausDigestion_C.ExecuteUbergraph_DinoInventory_GachaClausDigestion");

	UDinoInventory_GachaClausDigestion_C_ExecuteUbergraph_DinoInventory_GachaClausDigestion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
