// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Bee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Bee.DinoEntry_Bee_C.ExecuteUbergraph_DinoEntry_Bee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Bee_C::ExecuteUbergraph_DinoEntry_Bee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Bee.DinoEntry_Bee_C.ExecuteUbergraph_DinoEntry_Bee");

	UDinoEntry_Bee_C_ExecuteUbergraph_DinoEntry_Bee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
