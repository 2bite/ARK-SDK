// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriFoundation_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TriFoundation_Stone.PrimalItemStructure_TriFoundation_Stone_C.ExecuteUbergraph_PrimalItemStructure_TriFoundation_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TriFoundation_Stone_C::ExecuteUbergraph_PrimalItemStructure_TriFoundation_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TriFoundation_Stone.PrimalItemStructure_TriFoundation_Stone_C.ExecuteUbergraph_PrimalItemStructure_TriFoundation_Stone");

	UPrimalItemStructure_TriFoundation_Stone_C_ExecuteUbergraph_PrimalItemStructure_TriFoundation_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
