// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_TekWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_TekWyvern.DinoEntry_TekWyvern_C.ExecuteUbergraph_DinoEntry_TekWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_TekWyvern_C::ExecuteUbergraph_DinoEntry_TekWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_TekWyvern.DinoEntry_TekWyvern_C.ExecuteUbergraph_DinoEntry_TekWyvern");

	UDinoEntry_TekWyvern_C_ExecuteUbergraph_DinoEntry_TekWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
