// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Anky_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Anky.DinoEntry_Anky_C.ExecuteUbergraph_DinoEntry_Anky
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Anky_C::ExecuteUbergraph_DinoEntry_Anky(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Anky.DinoEntry_Anky_C.ExecuteUbergraph_DinoEntry_Anky");

	UDinoEntry_Anky_C_ExecuteUbergraph_DinoEntry_Anky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
