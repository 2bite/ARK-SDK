// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_LoadoutDummy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_LoadoutDummy.PrimalItemStructure_LoadoutDummy_C.ExecuteUbergraph_PrimalItemStructure_LoadoutDummy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_LoadoutDummy_C::ExecuteUbergraph_PrimalItemStructure_LoadoutDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_LoadoutDummy.PrimalItemStructure_LoadoutDummy_C.ExecuteUbergraph_PrimalItemStructure_LoadoutDummy");

	UPrimalItemStructure_LoadoutDummy_C_ExecuteUbergraph_PrimalItemStructure_LoadoutDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
