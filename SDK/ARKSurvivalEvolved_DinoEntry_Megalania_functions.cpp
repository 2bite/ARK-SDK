// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Megalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Megalania.DinoEntry_Megalania_C.ExecuteUbergraph_DinoEntry_Megalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Megalania_C::ExecuteUbergraph_DinoEntry_Megalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Megalania.DinoEntry_Megalania_C.ExecuteUbergraph_DinoEntry_Megalania");

	UDinoEntry_Megalania_C_ExecuteUbergraph_DinoEntry_Megalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
