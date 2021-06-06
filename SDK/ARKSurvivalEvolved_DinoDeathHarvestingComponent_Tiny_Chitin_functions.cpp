// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Tiny_Chitin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Tiny_Chitin.DinoDeathHarvestingComponent_Tiny_Chitin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Tiny_Chitin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny_Chitin.DinoDeathHarvestingComponent_Tiny_Chitin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin");

	UDinoDeathHarvestingComponent_Tiny_Chitin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
