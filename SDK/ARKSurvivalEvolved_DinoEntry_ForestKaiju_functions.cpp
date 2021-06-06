// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_ForestKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_ForestKaiju.DinoEntry_ForestKaiju_C.ExecuteUbergraph_DinoEntry_ForestKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_ForestKaiju_C::ExecuteUbergraph_DinoEntry_ForestKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_ForestKaiju.DinoEntry_ForestKaiju_C.ExecuteUbergraph_DinoEntry_ForestKaiju");

	UDinoEntry_ForestKaiju_C_ExecuteUbergraph_DinoEntry_ForestKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
