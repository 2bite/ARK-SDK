// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Furniture_WoodTable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Furniture_WoodTable.EngramEntry_Furniture_WoodTable_C.ExecuteUbergraph_EngramEntry_Furniture_WoodTable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Furniture_WoodTable_C::ExecuteUbergraph_EngramEntry_Furniture_WoodTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Furniture_WoodTable.EngramEntry_Furniture_WoodTable_C.ExecuteUbergraph_EngramEntry_Furniture_WoodTable");

	UEngramEntry_Furniture_WoodTable_C_ExecuteUbergraph_EngramEntry_Furniture_WoodTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
